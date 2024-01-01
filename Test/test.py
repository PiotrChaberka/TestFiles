import openai
import random

# Set up your OpenAI API credentials
openai.api_key = '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'

# List of possible topics
topics = ["jellyfishing", "krusty krab", "boating school", "jellyfish fields", "bubble blowing", "rock hunting"]

# Generate a conversation between SpongeBob and Patrick
def generate_conversation():
    # Randomly select a topic
    topic = random.choice(topics)

    # Build the conversation prompt
    prompt = f"SpongeBob: What do you think about {topic}?\nPatrick: "

    # Generate a response from AI model
    response = openai.Completion.create(
        engine='gpt2',
        prompt=prompt,
        max_tokens=50,
        n=1,
        stop=None,
        temperature=0.7,
        top_p=1.0,
        frequency_penalty=0.0,
        presence_penalty=0.0
    )

    # Extract Patrick's response from the generated output
    patrick_response = response.choices[0].text.strip().split('\n')[-1]

    # Print the conversation
    print("SpongeBob: What do you think about", topic + "?")
    print("Patrick:", patrick_response)
    print()

# Generate 5 random conversations
for _ in range(5):
    generate_conversation()