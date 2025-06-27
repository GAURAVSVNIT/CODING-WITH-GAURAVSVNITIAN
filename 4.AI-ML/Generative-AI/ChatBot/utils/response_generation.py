import nltk
from nltk.stem import WordNetLemmatizer
from nltk.tokenize import word_tokenize

# Define the response generation function
def response_generation(intent):
    # Define the responses for each intent
    responses = {
        'greeting': 'Hello! How can I assist you?',
        'information': 'My name is Chatbot, and I am here to help you with any questions or concerns you may have.',
        'unknown': 'I didn\'t understand that. Can you please rephrase your question or statement?'
    }

    # Return the response for the given intent
    return responses[intent]