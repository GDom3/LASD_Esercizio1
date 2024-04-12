
namespace lasd {

/* ************************************************************************** */

// ...

/* ************************************************************************** */

template <typename Data>
bool DictionaryContainer<Data>::InsertAll(const TraversableContainer<Data>& strutturaDaCopiare){
    bool copiatiTutti = true;
    
    strutturaDaCopiare.Traverse(
      
        [&copiatiTutti](const Data& datoPassato){
            copiatiTutti = copiatiTutti && Insert(datoPassato);
        }
    );

    return copiatiTutti;
}

template <typename Data>
bool DictionaryContainer<Data>::InsertAll(MappableContainer<Data>&& strutturaDaSpostare){
bool spostatiTutti = true;
    
    strutturaDaSpostare.Map(
        
        [&spostatiTutti](Data& datoPassato){
            spostatiTutti = spostatiTutti && Insert(datoPassato);
        }
    );

    return spostatiTutti;
}


template <typename Data>
bool DictionaryContainer<Data>::RemoveAll(const TraversableContainer<Data>& strutturaDaRimuovere){
    bool rimossiTutti = true;
    
    strutturaDaRimuovere.Traverse(
      
        [&rimossiTutti](const Data& datoPassato){
            rimossiTutti = rimossiTutti && Remove(datoPassato);
        }
    );

    return rimossiTutti;

}


template <typename Data>
bool DictionaryContainer<Data>::InsertSome(const TraversableContainer<Data>& strutturaDaCopiare){
    bool copiatiAlcuni = false;
    
    strutturaDaCopiare.Traverse(
      
        [&copiatiAlcuni](const Data& datoPassato){
            copiatiAlcuni = copiatiAlcuni || Insert(datoPassato);
        }
    );

    return copiatiAlcuni;
}

template <typename Data>
bool DictionaryContainer<Data>::InsertSome(MappableContainer<Data>&& strutturaDaSpostare){
bool spostatiAlcuni = false;
    
    strutturaDaSpostare.Map(
        
        [&spostatiAlcuni](Data& datoPassato){
            spostatiAlcuni = spostatiAlcuni || Insert(datoPassato);
        }
    );

    return spostatiAlcuni;
}


template <typename Data>
bool DictionaryContainer<Data>::RemoveSome(const TraversableContainer<Data>& strutturaDaRimuovere){
    bool rimossiAlcuni = false;
    
    strutturaDaRimuovere.Traverse(
      
        [&rimossiAlcuni](const Data& datoPassato){
            rimossiAlcuni = rimossiAlcuni || Remove(datoPassato);
        }
    );

    return rimossiAlcuni;

}


}
