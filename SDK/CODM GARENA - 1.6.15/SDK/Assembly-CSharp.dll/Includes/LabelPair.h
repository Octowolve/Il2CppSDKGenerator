#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LabelPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LabelPair"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
