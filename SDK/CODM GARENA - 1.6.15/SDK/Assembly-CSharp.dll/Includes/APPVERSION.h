#pragma once
#include <Il2Cpp/Il2Cpp.h>

class APPVERSION
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "APPVERSION"));
	}

	template <typename T = uintptr_t> T& programmeVersion() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& dataVersion() {
		return *(T*)((uintptr_t)this + 0x6);
	}


};

}
