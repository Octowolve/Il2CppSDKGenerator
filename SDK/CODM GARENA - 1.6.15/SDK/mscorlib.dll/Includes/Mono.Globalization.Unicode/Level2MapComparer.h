#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class Level2MapComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "Level2MapComparer"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(Level2MapComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F8BBF4))(this, o1, o2);
	}

};

}
