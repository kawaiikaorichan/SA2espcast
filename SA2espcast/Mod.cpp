#include "pch.h"
#include "Mod.h"

DataArray(NJS_TEXANIM, TechPoints, 0x173B440, 11);

NJS_TEXANIM TechPointsSpanish[] = {
   { 86, 19, 0, 9, 166, 29, 252, 48, 16, 0 }, //2000
   { 175, 24, 0, 9, 4, 4, 179, 28, 16, 0 }, //Good
   { 87, 20, 0, 10, 4, 29, 91, 49, 16, 0 }, //Great
   { 193, 25, 0, 10, 4, 54, 197, 79, 16, 0 }, //Nice
   { 174, 19, 0, 11, 4, 80, 178, 99, 16, 0 }, //Jammin'
   { 115, 20, 0, 10, 4, 105, 119, 125, 16, 0 }, //Cool
   { 132, 20, 0, 10, 4, 130, 136, 150, 16, 0 }, //Radical
   { 156, 21, 0, 9, 4, 154, 160, 175, 16, 0 }, //Tight
   { 252, 20, 0, 10, 4, 181, 256, 205, 16, 0 }, //Awesome
   { 153, 22, 0, 11, 4, 206, 157, 226, 16, 0 }, //Extreme
   { 154, 20, 0, 10, 4, 231, 158, 251, 16, 0 } //Perfect
};

void ReplaceTechPoints()
{
	for (int i = 0; i < 11; i++)
	{
		TechPoints[i] = TechPointsSpanish[i];
	}
}

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{
		ReplaceAdvertise();
		ReplaceMainCredits();
		ReplaceTechPoints();
	}
	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}