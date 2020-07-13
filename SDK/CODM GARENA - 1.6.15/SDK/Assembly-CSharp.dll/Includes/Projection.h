#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Projection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Projection"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Perspective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Orthagraphic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
