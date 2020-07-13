#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TDirRoleCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TDirRoleCollection"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& RoleInfos() {
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

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(TDirRoleCollection*, uintptr_t))(Il2CppBase() + 0x443CE3C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TDirRoleCollection*, uintptr_t))(Il2CppBase() + 0x443CF1C))(this, reader);
	}

};

}
