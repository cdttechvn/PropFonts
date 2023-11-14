# User's specified design for the Greek Delta symbol, reinterpreted for column-major order
delta_design_columns = [
    [0, 0, 0, 0, 1, 1, 1],  # Column 1
    [0, 0, 1, 1, 1, 1, 1],  # Column 2
    [0, 1, 1, 1, 0, 1, 1],  # Column 3
    [1, 1, 0, 0, 0, 1, 1],  # Column 4
    [0, 1, 1, 1, 0, 1, 1],  # Column 5
    [0, 0, 1, 1, 1, 1, 1],  # Column 6
    [0, 0, 0, 0, 1, 1, 1],  # Column 7
]

# Function to convert a column to a byte
def column_to_byte(column):
    return sum([bit << i for i, bit in enumerate(column)])

# Converting each column to a byte
delta_bytes_columns = [column_to_byte(column) for column in delta_design_columns]

# Formatting the bytes for the font file
delta_byte_string_columns = ', '.join('0x{:02X}'.format(byte) for byte in delta_bytes_columns)

print(delta_byte_string_columns)
