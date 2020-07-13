#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class RemoteScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "RemoteScene"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rootGameObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& childGameObjects() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeforeSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterDeserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(RemoteScene*))(Il2CppBase() + 0x487E568))(this);
	}
	template <typename T = void> T CollectChildren(uintptr_t parentGO) {
		return ((T (*)(RemoteScene*, uintptr_t))(Il2CppBase() + 0x487E698))(this, parentGO);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(RemoteScene*))(Il2CppBase() + 0x487E8C4))(this);
	}
	template <typename T = uintptr_t> T FindParent(int32_t parentInstanceId) {
		return ((T (*)(RemoteScene*, int32_t))(Il2CppBase() + 0x487ECA0))(this, parentInstanceId);
	}

};

}
