#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OcTestObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OcTestObj"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& debugPanel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DebugZbuf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& debugBuf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& FetchZbuf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& DrawDebugCenterLine() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppVector3> T& DebugCenter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DebugRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& VehicleThres() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fwd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& right() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& up() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WithinDebugRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocateDebugBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryFetchZBuf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x271DB5C))(0);
	}
	template <typename T = bool> T WithinDebugRange(Il2CppVector3 pos) {
		return ((T (*)(OcTestObj*, Il2CppVector3))(Il2CppBase() + 0x271DCC8))(this, pos);
	}
	template <typename T = void> T AllocateDebugBuffer() {
		return ((T (*)(OcTestObj*))(Il2CppBase() + 0x271DDF0))(this);
	}
	template <typename T = void> T TryFetchZBuf() {
		return ((T (*)(OcTestObj*))(Il2CppBase() + 0x271E48C))(this);
	}

};

}
