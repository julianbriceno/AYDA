
/** Pon aquí los nombres, apellifos y números de cédula de la pareja que
    somete 
	Julian R, Briceño L, V019895266 - Juan A Vivas C - V020431975
 */

using Ulong = unsigned long;

struct SumExtremes
{
  const DynList<Ulong> extremes;
  const long long sum = 0;

  SumExtremes() {}

  SumExtremes(DynList<Ulong> && items, long long __sum)
    : extremes(std::move(items)), sum(__sum) {}

  SumExtremes(const DynList<Ulong> & items, long long __sum)
    : extremes(items), sum(__sum) {}
};


pair<SumExtremes, SumExtremes> 
compute_extremes(ifstream & in, const size_t n, const size_t m)
{
  if (m > n) 
    {
      cout << "ERROR: num_lines is smaller than n";
      exit(0);
    }

  // Ahora te toca a ti. Lee del stream n números y calcula los objetos
  // SumExtremes con los m menores y mayores junto con sus respectivas
  // sumas en línea

  return make_pair(SumExtremes(), SumExtremes()); // este valor es inválido
}
