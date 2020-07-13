#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MouseExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MouseExtend"));
	}

	template <typename T = bool> T& m_ButtonDown() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_LastPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MouseId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& DragOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector2> T get_DragOffset() {
		return ((T (*)(MouseExtend*))(Il2CppBase() + 0x270FEC4))(this);
	}
	template <typename T = void> T set_DragOffset(Il2CppVector2 value) {
		return ((T (*)(MouseExtend*, Il2CppVector2))(Il2CppBase() + 0x270FED8))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MouseExtend*))(Il2CppBase() + 0x270FEE4))(this);
	}

};

}
