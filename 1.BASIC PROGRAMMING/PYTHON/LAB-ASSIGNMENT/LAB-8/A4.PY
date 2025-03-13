"""
Create a tokenizer for your own language (mother tongue you speak). The tokenizer should
tokenize punctuations, dates, urls, emails, numbers (in all different forms such as “33.15”,

“3,22,243”, “313/77”), social media usernames/user handles. Use regular expressions to design
this. [Hint: Use unicode blocks for your language, check wikipedia pages]
"""

import re

def tokenize(text):
    # Regular expression patterns for different token types
    
    # Email pattern: matches common email addresses.
    email_pattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b'
    
    # URL pattern: matches http or https URLs.
    url_pattern = r'https?://(?:www\.)?[^\s]+'
    
    # Date pattern: 
    # Matches dates like "21/09/2021", "21-09-2021" or "Sep 21, 2021".
    date_pattern = (
        r'\b(?:\d{1,2}[-/]\d{1,2}[-/]\d{2,4})\b'
        r'|'
        r'\b(?:Jan(?:uary)?|Feb(?:ruary)?|Mar(?:ch)?|Apr(?:il)?|May|Jun(?:e)?|'
        r'Jul(?:y)?|Aug(?:ust)?|Sep(?:tember)?|Oct(?:ober)?|Nov(?:ember)?|Dec(?:ember)?)'
        r'\s+\d{1,2}(?:,?\s+\d{2,4})?\b'
    )
    
    # Number pattern: covers decimals, comma-separated numbers, and numbers with slashes.
    number_pattern = r'\b\d+(?:[,/]\d+)*(?:\.\d+)?\b'
    
    # Social media username/handle pattern: matches handles beginning with '@'
    username_pattern = r'@[A-Za-z0-9_]+'
    
    # Punctuation pattern: matches common punctuation marks.
    punctuation_pattern = r'[.,!?;:\-\(\)\'"“”‘’]'
    
    # Word pattern: matches words in multiple languages.
    # The following character class includes:
    #   A-Za-z0-9 and accented Latin letters (À-Ö, Ø-ö, ø-ÿ)
    #   Devanagari (Hindi, Sanskrit): \u0900-\u097F
    #   Gujarati: \u0A80-\u0AFF
    #   Arabic: \u0600-\u06FF
    #   Cyrillic (e.g., Russian): \u0400-\u04FF
    #   CJK Unified Ideographs (Chinese, Kanji): \u4E00-\u9FFF
    #   Hiragana (Japanese): \u3040-\u309F
    #   Katakana (Japanese): \u30A0-\u30FF
    word_pattern = (
        r'\b['
        r'0-9A-Za-zÀ-ÖØ-öø-ÿ'      # Latin and accented letters
        r'\u0900-\u097F'           # Devanagari
        r'\u0A80-\u0AFF'           # Gujarati
        r'\u0600-\u06FF'           # Arabic
        r'\u0400-\u04FF'           # Cyrillic
        r'\u4E00-\u9FFF'           # CJK Unified Ideographs
        r'\u3040-\u309F'           # Hiragana
        r'\u30A0-\u30FF'           # Katakana
        r']+\b'
    )
    
    # Combine all patterns using alternation.
    combined_pattern = (
        f'({email_pattern})'
        f'|({url_pattern})'
        f'|({date_pattern})'
        f'|({number_pattern})'
        f'|({username_pattern})'
        f'|({punctuation_pattern})'
        f'|({word_pattern})'
    )
    
    # Find all matches; re.UNICODE ensures proper handling of Unicode characters.
    matches = re.findall(combined_pattern, text, flags=re.UNICODE | re.IGNORECASE)
    
    # Flatten the tuple matches by selecting non-empty groups.
    tokens = [token for group in matches for token in group if token]
    
    return tokens

# --- Sample Texts in Multiple Languages ---
samples = {
    "Hindi": "नमस्ते दुनिया! आज 21/09/2021 को मौसम अच्छा है।",
    "Gujarati": "હેલો વિશ્વ! આજે 21/09/2021 પર સારો દિવસ છે.",
    "Sanskrit": "नमः विश्व! अद्य 21-09-2021 तु उत्तमः दिवसः अस्ति।",
    "French": "Bonjour le monde! Aujourd'hui, le 21/09/2021, le temps est agréable.",
    "German": "Hallo Welt! Heute, am 21/09/2021, ist das Wetter schön.",
    "Arabic": "مرحبا بالعالم! اليوم 21/09/2021 الطقس جميل.",
    "Russian": "Привет мир! Сегодня 21/09/2021 погода хорошая.",
    "Chinese": "你好，世界！今天是2021/09/21，天气很好。",
    "Japanese": "こんにちは世界！今日は2021-09-21です。",
    "Spanish": "¡Hola mundo! Hoy es 21/09/2021 y el clima es agradable."
}

# --- Testing the Tokenizer on All Samples ---
if __name__ == '__main__':
    for language, text in samples.items():
        print(f"\n--- Tokens in {language} ---")
        tokens = tokenize(text)
        for token in tokens:
            print(token)

