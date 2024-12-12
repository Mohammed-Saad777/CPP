import hashlib

def hashGenerator(data):
    result = hashlib.sha256(data.encode())
    return result.hexdigest()

class Block:
    def __init__(self, data, block_hash, prev_hash):
        self.data = data
        self.hash = block_hash
        self.prev_hash = prev_hash

class Blockchain:
    def __init__(self):
       
        hashStart = hashGenerator('gen_hash')

        genesis = Block('gen-data', hashStart, None)
        self.chain = [genesis]

    def add_block(self, data):
        prev_hash = self.chain[-1].hash
        block_hash = hashGenerator(data + prev_hash)
        block = Block(data, block_hash, prev_hash)
        self.chain.append(block)


bc = Blockchain()
bc.add_block('1')
bc.add_block('2')
bc.add_block('3')


for block in bc.chain:
    print(block.__dict__)
