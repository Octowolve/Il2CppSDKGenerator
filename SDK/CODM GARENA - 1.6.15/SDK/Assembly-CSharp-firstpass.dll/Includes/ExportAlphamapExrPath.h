#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExportAlphamapExrPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "ExportAlphamapExrPath"));
	}

	template <typename T = Il2CppString*> T& RGBPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& AlphaPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
