import React from 'react';
import { useParams } from 'react-router-dom';

const products = [
  {
    id: 1,
    name: "Wireless Headphones",
    price: 99.99,
    rating: 4.5,
    image: "https://images.unsplash.com/photo-1505740420928-5e560c06d30e?w=500&q=80",
    description: "High-quality wireless headphones with noise cancellation and premium sound quality. Perfect for music lovers and professionals alike.",
    features: [
      "Active Noise Cancellation",
      "40-hour battery life",
      "Premium audio drivers",
      "Comfortable ear cushions",
      "Quick charging capability"
    ]
  },
  {
    id: 2,
    name: "Smart Watch",
    price: 199.99,
    rating: 4.8,
    image: "https://images.unsplash.com/photo-1523275335684-37898b6baf30?w=500&q=80",
    description: "Feature-packed smartwatch with health tracking, notifications, and long battery life.",
    features: [
      "Heart rate monitoring",
      "Sleep tracking",
      "Water resistant",
      "GPS enabled",
      "5-day battery life"
    ]
  },
  // ... other products
];

interface ProductDetailsProps {
  onAddToCart: () => void;
}

export default function ProductDetails({ onAddToCart }: ProductDetailsProps) {
  const { id } = useParams();
  const product = products.find(p => p.id === Number(id));

  if (!product) {
    return <div className="text-center py-8">Product not found</div>;
  }

  return (
    <div className="bg-white rounded-lg shadow-md p-8">
      <div className="grid grid-cols-1 md:grid-cols-2 gap-8">
        <div>
          <img
            src={product.image}
            alt={product.name}
            className="w-full rounded-lg"
          />
        </div>
        <div>
          <h1 className="text-3xl font-bold mb-4">{product.name}</h1>
          <div className="flex items-center mb-4">
            <span className="text-yellow-400">★</span>
            <span className="ml-1">{product.rating} rating</span>
          </div>
          <div className="text-3xl font-bold mb-6">${product.price}</div>
          <p className="text-gray-600 mb-6">{product.description}</p>
          <button
            onClick={onAddToCart}
            className="w-full bg-[#f0c14b] hover:bg-[#e6b33d] text-sm font-semibold py-3 px-6 rounded-md transition-colors duration-200 mb-6"
          >
            Add to Cart
          </button>
          <div>
            <h2 className="text-xl font-semibold mb-4">Features</h2>
            <ul className="list-disc pl-5 space-y-2">
              {product.features.map((feature, index) => (
                <li key={index}>{feature}</li>
              ))}
            </ul>
          </div>
        </div>
      </div>
    </div>
  );
}