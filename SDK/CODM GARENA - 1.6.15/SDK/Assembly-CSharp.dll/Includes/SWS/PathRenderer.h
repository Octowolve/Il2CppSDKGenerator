#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class PathRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "PathRenderer"));
	}

	template <typename T = bool> T& onUpdate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& spacing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& line() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& points() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCurved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLinear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PathRenderer*))(Il2CppBase() + 0x3F36B14))(this);
	}
	template <typename T = uintptr_t> T StartRenderer() {
		return ((T (*)(PathRenderer*))(Il2CppBase() + 0x3F36C64))(this);
	}
	template <typename T = void> T Render() {
		return ((T (*)(PathRenderer*))(Il2CppBase() + 0x3F36D4C))(this);
	}
	template <typename T = void> T DrawCurved() {
		return ((T (*)(PathRenderer*))(Il2CppBase() + 0x3F37020))(this);
	}
	template <typename T = void> T DrawLinear() {
		return ((T (*)(PathRenderer*))(Il2CppBase() + 0x3F37208))(this);
	}

};

}
