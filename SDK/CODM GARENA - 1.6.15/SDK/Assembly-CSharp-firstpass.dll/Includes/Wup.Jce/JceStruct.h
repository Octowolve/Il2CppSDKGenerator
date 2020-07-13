#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Jce {

class JceStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Jce", "JceStruct"));
	}

	template <typename T = int32_t> static T& JCE_MAX_STRING_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T WriteTo(uintptr_t _os) {
		return ((T (*)(JceStruct*, uintptr_t))(Il2CppBase() + 0x0))(this, _os);
	}
	template <typename T = void> T ReadFrom(uintptr_t _is) {
		return ((T (*)(JceStruct*, uintptr_t))(Il2CppBase() + 0x0))(this, _is);
	}
	template <typename T = void> T Display(uintptr_t sb, int32_t level) {
		return ((T (*)(JceStruct*, uintptr_t, int32_t))(Il2CppBase() + 0x4F933D0))(this, sb, level);
	}

};

}
