#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DATAVERSION
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DATAVERSION"));
	}

	template <typename T = uint16_t> T& DataVersion() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
