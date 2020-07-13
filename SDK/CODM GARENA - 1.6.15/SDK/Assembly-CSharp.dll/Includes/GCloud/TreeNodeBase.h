#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TreeNodeBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TreeNodeBase"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ParentId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Tag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CustomData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeaf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeDecode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(TreeNodeBase*))(Il2CppBase() + 0x4441F4C))(this);
	}
	template <typename T = bool> T IsCategory() {
		return ((T (*)(TreeNodeBase*))(Il2CppBase() + 0x4441F54))(this);
	}
	template <typename T = bool> T IsLeaf() {
		return ((T (*)(TreeNodeBase*))(Il2CppBase() + 0x4442000))(this);
	}
	template <typename T = bool> T IsRoot() {
		return ((T (*)(TreeNodeBase*))(Il2CppBase() + 0x4430598))(this);
	}
	template <typename T = void> T BeforeEncode(uintptr_t writer) {
		return ((T (*)(TreeNodeBase*, uintptr_t))(Il2CppBase() + 0x44420A8))(this, writer);
	}
	template <typename T = void> T BeforeDecode(uintptr_t reader) {
		return ((T (*)(TreeNodeBase*, uintptr_t))(Il2CppBase() + 0x4442224))(this, reader);
	}
	template <typename T = void> T xLuaBaseProxy_BeforeEncode(uintptr_t P0) {
		return ((T (*)(TreeNodeBase*, uintptr_t))(Il2CppBase() + 0x444236C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeforeDecode(uintptr_t P0) {
		return ((T (*)(TreeNodeBase*, uintptr_t))(Il2CppBase() + 0x4442374))(this, P0);
	}

};

}
