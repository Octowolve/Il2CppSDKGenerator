#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class NodeWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "NodeWrapper"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Category() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Leaf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeaf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetNode() {
		return ((T (*)(NodeWrapper*))(Il2CppBase() + 0x44302A8))(this);
	}
	template <typename T = bool> T IsCategory() {
		return ((T (*)(NodeWrapper*))(Il2CppBase() + 0x4430374))(this);
	}
	template <typename T = bool> T IsLeaf() {
		return ((T (*)(NodeWrapper*))(Il2CppBase() + 0x4430420))(this);
	}
	template <typename T = bool> T IsRoot() {
		return ((T (*)(NodeWrapper*))(Il2CppBase() + 0x44304C8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(NodeWrapper*, uintptr_t))(Il2CppBase() + 0x443065C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(NodeWrapper*, uintptr_t))(Il2CppBase() + 0x4430788))(this, reader);
	}

};

}
