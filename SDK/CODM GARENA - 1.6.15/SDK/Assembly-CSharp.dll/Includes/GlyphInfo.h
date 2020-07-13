#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlyphInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlyphInfo"));
	}

	template <typename T = Il2CppVector2> T& v0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& v1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& u0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& u1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& u2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& u3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& advance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& channel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Valid() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
