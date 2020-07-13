#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODFakeLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_FakeLight"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
