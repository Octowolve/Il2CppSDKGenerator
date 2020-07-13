#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class TaskLineRender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "TaskLineRender"));
	}

	template <typename T = uintptr_t> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_EndPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsManualUpdate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Line() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_UIRootZ() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TaskLineRender*))(Il2CppBase() + 0x3F22798))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TaskLineRender*))(Il2CppBase() + 0x3F229E8))(this);
	}
	template <typename T = void> T DoUpdate() {
		return ((T (*)(TaskLineRender*))(Il2CppBase() + 0x3F22A98))(this);
	}

};

}
