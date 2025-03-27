import React, { useState } from 'react';
import { Routes, Route } from 'react-router-dom';
import Layout from './components/Layout';
import Home from './pages/Home';
import ProductDetails from './pages/ProductDetails';
import Cart from './pages/Cart';

function App() {
  const [cartItems, setCartItems] = useState<number>(0);
  const [searchQuery, setSearchQuery] = useState<string>("");

  const handleAddToCart = () => {
    setCartItems(prev => prev + 1);
  };

  return (
    <Layout cartItems={cartItems} searchQuery={searchQuery} setSearchQuery={setSearchQuery}>
      <Routes>
        <Route path="/" element={<Home onAddToCart={handleAddToCart} />} />
        <Route path="/product/:id" element={<ProductDetails onAddToCart={handleAddToCart} />} />
        <Route path="/cart" element={<Cart />} />
      </Routes>
    </Layout>
  );
}

export default App;