import { useState, useEffect } from 'react';
import axios from 'axios';

interface CurrencyData {
  [key: string]: number;
}

function App() {
  const [amount, setAmount] = useState<string>('1');
  const [fromCurrency, setFromCurrency] = useState<string>('USD');
  const [toCurrency, setToCurrency] = useState<string>('EUR');
  const [exchangeRate, setExchangeRate] = useState<number>(0);
  const [currencies, setCurrencies] = useState<string[]>([]);

  useEffect(() => {
    axios.get('https://api.exchangerate-api.com/v4/latest/USD')
      .then(response => {
        setCurrencies(['USD', ...Object.keys(response.data.rates)]);
      })
      .catch(error => console.error('Error fetching currencies:', error));
  }, []);

  useEffect(() => {
    if (fromCurrency && toCurrency) {
      axios.get(`https://api.exchangerate-api.com/v4/latest/${fromCurrency}`)
        .then(response => {
          const rates = response.data.rates as CurrencyData;
          setExchangeRate(rates[toCurrency]);
        })
        .catch(error => console.error('Error fetching exchange rate:', error));
    }
  }, [fromCurrency, toCurrency]);

  const handleAmountChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    const value = e.target.value;
    if (value === '' || /^\d*\.?\d*$/.test(value)) {
      setAmount(value);
    }
  };

  const handleSwap = () => {
    setFromCurrency(toCurrency);
    setToCurrency(fromCurrency);
  };

  const convertedAmount = amount ? (parseFloat(amount) * exchangeRate).toFixed(2) : '0';

  return (
    <div className="min-h-screen bg-gradient-to-br from-blue-500 to-purple-600 flex items-center justify-center p-4">
      <div className="bg-white rounded-xl shadow-2xl p-6 w-full max-w-md">
        <h1 className="text-2xl font-bold text-gray-800 text-center mb-6">
          Currency Converter
        </h1>

        <div className="space-y-4">
          {/* Amount Input */}
          <div>
            <label className="block text-sm font-medium text-gray-700 mb-1">
              Amount
            </label>
            <input
              type="text"
              value={amount}
              onChange={handleAmountChange}
              className="w-full p-2 border border-gray-300 rounded-md focus:ring-2 focus:ring-blue-500 focus:border-blue-500"
              placeholder="Enter amount"
            />
          </div>

          {/* From Currency */}
          <div>
            <label className="block text-sm font-medium text-gray-700 mb-1">
              From
            </label>
            <select
              value={fromCurrency}
              onChange={(e) => setFromCurrency(e.target.value)}
              className="w-full p-2 border border-gray-300 rounded-md focus:ring-2 focus:ring-blue-500 focus:border-blue-500"
            >
              {currencies.map(currency => (
                <option key={currency} value={currency}>
                  {currency}
                </option>
              ))}
            </select>
          </div>

          {/* Swap Button */}
          <div className="flex justify-center">
            <button
              onClick={handleSwap}
              className="bg-blue-500 text-white px-4 py-2 rounded-full hover:bg-blue-600 transition-colors"
            >
              🔄 Swap
            </button>
          </div>

          {/* To Currency */}
          <div>
            <label className="block text-sm font-medium text-gray-700 mb-1">
              To
            </label>
            <select
              value={toCurrency}
              onChange={(e) => setToCurrency(e.target.value)}
              className="w-full p-2 border border-gray-300 rounded-md focus:ring-2 focus:ring-blue-500 focus:border-blue-500"
            >
              {currencies.map(currency => (
                <option key={currency} value={currency}>
                  {currency}
                </option>
              ))}
            </select>
          </div>

          {/* Result */}
          <div className="mt-6 p-4 bg-gray-50 rounded-lg">
            <div className="text-center">
              <p className="text-sm text-gray-600">
                {amount} {fromCurrency} =
              </p>
              <p className="text-3xl font-bold text-gray-800">
                {convertedAmount} {toCurrency}
              </p>
              <p className="text-xs text-gray-500 mt-2">
                1 {fromCurrency} = {exchangeRate.toFixed(4)} {toCurrency}
              </p>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
}

export default App;