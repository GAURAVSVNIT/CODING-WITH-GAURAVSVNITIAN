import React, { useState } from 'react';
import { Search, ShoppingCart, Menu, User, Heart } from 'lucide-react';

// Mock product data
const products = [
  {
    id: 1,
    name: "Wireless Headphones",
    price: 99.99,
    rating: 4.5,
    image: "https://images.unsplash.com/photo-1505740420928-5e560c06d30e?w=500&q=80",
  },
  {
    id: 2,
    name: "Smart Watch",
    price: 199.99,
    rating: 4.8,
    image: "https://images.unsplash.com/photo-1523275335684-37898b6baf30?w=500&q=80",
  },
  {
    id: 3,
    name: "Laptop",
    price: 999.99,
    rating: 4.7,
    image: "https://images.unsplash.com/photo-1496181133206-80ce9b88a853?w=500&q=80",
  },
  {
    id: 4,
    name: "Smartphone",
    price: 699.99,
    rating: 4.6,
    image: "https://images.unsplash.com/photo-1511707171634-5f897ff02aa9?w=500&q=80",
  },
  {
    id: 5,
    name: "Camera",
    price: 549.99,
    rating: 4.4,
    image: "https://images.unsplash.com/photo-1516035069371-29a1b244cc32?w=500&q=80",
  },
  {
    id: 6,
    name: "Gaming Console",
    price: 399.99,
    rating: 4.9,
    image: "https://images.unsplash.com/photo-1486401899868-0e435ed85128?w=500&q=80",
  },
];

function App() {
  const [cartItems, setCartItems] = useState<number>(0);
  const [searchQuery, setSearchQuery] = useState<string>("");

  return (
    <div className="min-h-screen bg-gray-100">
      {/* Navigation Bar */}
      <nav className="bg-[#131921] text-white p-4">
        <div className="container mx-auto">
          <div className="flex items-center justify-between">
            <div className="flex items-center space-x-8">
              <h1 className="text-2xl font-bold">amazon</h1>
              <div className="flex-1 max-w-2xl">
                <div className="relative">
                  <input
                    type="text"
                    placeholder="Search products..."
                    className="w-full px-4 py-2 rounded-lg text-black"
                    value={searchQuery}
                    onChange={(e) => setSearchQuery(e.target.value)}
                  />
                  <Search className="absolute right-3 top-2.5 text-gray-500" />
                </div>
              </div>
            </div>
            <div className="flex items-center space-x-6">
              <button className="flex items-center">
                <User className="w-6 h-6" />
                <span className="ml-1">Account</span>
              </button>
              <button className="flex items-center">
                <Heart className="w-6 h-6" />
                <span className="ml-1">Wishlist</span>
              </button>
              <button className="flex items-center">
                <div className="relative">
                  <ShoppingCart className="w-6 h-6" />
                  <span className="absolute -top-2 -right-2 bg-orange-500 text-white rounded-full w-5 h-5 flex items-center justify-center text-xs">
                    {cartItems}
                  </span>
                </div>
                <span className="ml-1">Cart</span>
              </button>
            </div>
          </div>
        </div>
      </nav>

      {/* Secondary Navigation */}
      <div className="bg-[#232f3e] text-white py-2">
        <div className="container mx-auto">
          <div className="flex items-center space-x-6">
            <button className="flex items-center">
              <Menu className="w-6 h-6 mr-1" />
              All
            </button>
            <button>Today's Deals</button>
            <button>Customer Service</button>
            <button>Registry</button>
            <button>Gift Cards</button>
            <button>Sell</button>
          </div>
        </div>
      </div>

      {/* Main Content */}
      <main className="container mx-auto py-8">
        <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-8">
          {products.map((product) => (
            <div key={product.id} className="bg-white rounded-lg shadow-md overflow-hidden hover:shadow-xl transition-shadow duration-300">
              <img
                src={product.image}
                alt={product.name}
                className="w-full h-64 object-cover"
              />
              <div className="p-4">
                <h3 className="text-xl font-semibold mb-2">{product.name}</h3>
                <div className="flex items-center justify-between">
                  <span className="text-2xl font-bold">${product.price}</span>
                  <div className="flex items-center">
                    <span className="text-yellow-400">★</span>
                    <span className="ml-1">{product.rating}</span>
                  </div>
                </div>
                <button
                  onClick={() => setCartItems(prev => prev + 1)}
                  className="mt-4 w-full bg-[#f0c14b] hover:bg-[#e6b33d] text-sm font-semibold py-2 px-4 rounded-md transition-colors duration-200"
                >
                  Add to Cart
                </button>
              </div>
            </div>
          ))}
        </div>
      </main>

      {/* Footer */}
      <footer className="bg-[#131921] text-white mt-12">
        <div className="container mx-auto py-8">
          <div className="grid grid-cols-1 md:grid-cols-4 gap-8">
            <div>
              <h3 className="font-bold mb-4">Get to Know Us</h3>
              <ul className="space-y-2">
                <li>Careers</li>
                <li>Blog</li>
                <li>About Amazon</li>
                <li>Investor Relations</li>
              </ul>
            </div>
            <div>
              <h3 className="font-bold mb-4">Make Money with Us</h3>
              <ul className="space-y-2">
                <li>Sell products on Amazon</li>
                <li>Sell on Amazon Business</li>
                <li>Sell apps on Amazon</li>
                <li>Become an Affiliate</li>
              </ul>
            </div>
            <div>
              <h3 className="font-bold mb-4">Amazon Payment Products</h3>
              <ul className="space-y-2">
                <li>Amazon Business Card</li>
                <li>Shop with Points</li>
                <li>Reload Your Balance</li>
                <li>Amazon Currency Converter</li>
              </ul>
            </div>
            <div>
              <h3 className="font-bold mb-4">Let Us Help You</h3>
              <ul className="space-y-2">
                <li>Your Account</li>
                <li>Your Orders</li>
                <li>Shipping Rates & Policies</li>
                <li>Returns & Replacements</li>
              </ul>
            </div>
          </div>
        </div>
        <div className="border-t border-gray-700">
          <div className="container mx-auto py-4 text-center">
            <p>&copy; 2025 Amazon Clone. All rights reserved.</p>
          </div>
        </div>
      </footer>
    </div>
  );
}

export default App;