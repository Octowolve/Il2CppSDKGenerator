#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ELifelineType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ELifelineType"));
	}

	template <typename T = unsigned char> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& DamageShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GroupShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
