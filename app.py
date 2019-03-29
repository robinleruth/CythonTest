from app import main, PyTest

main()


dico = {
        b'a': 1,
        b'b': 2
        }


abc = PyTest(dico)

print(abc.get_a())
abc.print_map()
