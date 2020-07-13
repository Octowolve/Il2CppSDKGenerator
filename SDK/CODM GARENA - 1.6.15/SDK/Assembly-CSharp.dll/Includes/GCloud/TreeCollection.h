#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TreeCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TreeCollection"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& treeList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TreeList() {
		return ((T (*)(TreeCollection*))(Il2CppBase() + 0x4441844))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(TreeCollection*, uintptr_t))(Il2CppBase() + 0x44418F4))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TreeCollection*, uintptr_t))(Il2CppBase() + 0x44419DC))(this, reader);
	}

};

}
