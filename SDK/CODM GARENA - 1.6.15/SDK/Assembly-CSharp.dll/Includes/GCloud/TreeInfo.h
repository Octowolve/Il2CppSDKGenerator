#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TreeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TreeInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& nodeList() {
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

	template <typename T = Il2CppList<uintptr_t>*> T get_NodeList() {
		return ((T (*)(TreeInfo*))(Il2CppBase() + 0x4441ABC))(this);
	}
	template <typename T = int32_t> T get_TreeId() {
		return ((T (*)(TreeInfo*))(Il2CppBase() + 0x4441B6C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(TreeInfo*, uintptr_t))(Il2CppBase() + 0x4441CD4))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TreeInfo*, uintptr_t))(Il2CppBase() + 0x4441DBC))(this, reader);
	}

};

}
