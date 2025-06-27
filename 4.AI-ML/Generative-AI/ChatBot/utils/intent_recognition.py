import nltk
from nltk.stem import WordNetLemmatizer
from nltk.tokenize import word_tokenize

# Define the intent recognition function

def intent_recognition(text):
    
    # Tokenize the input text
    tokens = word_tokenize(text)
    # Initialize the lemmatizer
    lemmatizer = WordNetLemmatizer()
    # Lemmatize the tokens
    lemmatized_tokens = [lemmatizer.lemmatize(token.lower()) for token in tokens]

    # Identify the intent
    if 'hello' in lemmatized_tokens:
        return 'greeting'
    elif 'how are you' in lemmatized_tokens:
        return 'greeting'
    elif 'what is your name' in lemmatized_tokens:
        return 'information'
    else:
        return 'unknown'