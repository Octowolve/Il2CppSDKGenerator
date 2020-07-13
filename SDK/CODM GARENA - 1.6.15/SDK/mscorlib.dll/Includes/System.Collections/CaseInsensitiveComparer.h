#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class CaseInsensitiveComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "CaseInsensitiveComparer"));
	}

	template <typename T = uintptr_t> static T& defaultComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultInvariantComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& culture() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x363643C))(0);
	}
	template <typename T = uintptr_t> static T get_DefaultInvariant() {
		return ((T (*)(void *))(Il2CppBase() + 0x36364EC))(0);
	}
	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(CaseInsensitiveComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363659C))(this, a, b);
	}

};

}
