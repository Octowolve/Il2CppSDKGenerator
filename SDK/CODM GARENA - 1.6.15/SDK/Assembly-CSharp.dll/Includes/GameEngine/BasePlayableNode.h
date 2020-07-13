#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BasePlayableNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BasePlayableNode"));
	}

	template <typename T = uintptr_t> T& m_Mixer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Enable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChildPlayableNodes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Handle() {
		return ((T (*)(BasePlayableNode*))(Il2CppBase() + 0x360E90C))(this);
	}
	template <typename T = void> T set_Handle(uintptr_t value) {
		return ((T (*)(BasePlayableNode*, uintptr_t))(Il2CppBase() + 0x360E920))(this, value);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BasePlayableNode*))(Il2CppBase() + 0x360E92C))(this);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(BasePlayableNode*))(Il2CppBase() + 0x360E9D4))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(BasePlayableNode*, bool))(Il2CppBase() + 0x360E9DC))(this, value);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(BasePlayableNode*, float))(Il2CppBase() + 0x360E9E4))(this, deltaTime);
	}
	template <typename T = void> T AddChild(uintptr_t node) {
		return ((T (*)(BasePlayableNode*, uintptr_t))(Il2CppBase() + 0x360EA84))(this, node);
	}
	template <typename T = void> T RemoveChild(uintptr_t node) {
		return ((T (*)(BasePlayableNode*, uintptr_t))(Il2CppBase() + 0x360ECF0))(this, node);
	}
	template <typename T = int32_t> T ContainChild(uintptr_t node) {
		return ((T (*)(BasePlayableNode*, uintptr_t))(Il2CppBase() + 0x360EB78))(this, node);
	}
	template <typename T = uintptr_t> T GetChildPlayableNode(int32_t index) {
		return ((T (*)(BasePlayableNode*, int32_t))(Il2CppBase() + 0x360EDE4))(this, index);
	}

};

}
