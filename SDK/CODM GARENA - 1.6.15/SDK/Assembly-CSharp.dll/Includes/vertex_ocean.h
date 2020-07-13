#pragma once
#include <Il2Cpp/Il2Cpp.h>

class vertexocean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "vertex_ocean"));
	}

	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& z() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& nx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ny() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& nz() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& a() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& b() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& c() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _a() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _b() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _c() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ox() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& oy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& oz() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& debugColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
