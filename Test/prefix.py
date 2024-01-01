def add_prefix_to_file(file_path, output_file_path=None):
    try:
        # Open the input file in read mode with UTF-8 encoding
        with open(file_path, 'r', encoding='utf-8') as file:
            # Read all lines from the file
            lines = file.readlines()
        
        # Add a prefix '-' to each line
        prefixed_lines = ['-' + line for line in lines]
        
        # Determine the output file path
        output_path = output_file_path if output_file_path else file_path
        
        # Open the output file in write mode and write the prefixed lines
        with open(output_path, 'w', encoding='utf-8') as file:
            file.writelines(prefixed_lines)
        
        print(f"Successfully added prefixes to {len(prefixed_lines)} lines and saved to {output_path}.")
    
    except Exception as e:
        print(f"An error occurred: {e}")

# Usage with correct file path
add_prefix_to_file(r'C:\Users\piotr\OneDrive\Pulpit\Gen2.txt')  # Update this path to the exact location of your file
