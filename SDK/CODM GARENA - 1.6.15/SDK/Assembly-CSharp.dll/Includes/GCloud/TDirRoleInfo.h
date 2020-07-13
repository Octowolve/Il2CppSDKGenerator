#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TDirRoleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TDirRoleInfo"));
	}

	template <typename T = Il2CppString*> T& OpenId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TreeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LeafId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& LastLoginTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& RoleId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& RoleLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RoleName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& UserData() {
		return *(T*)((uintptr_t)this + 0x30);
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
		return ((T (*)(TDirRoleInfo*, uintptr_t))(Il2CppBase() + 0x443D0A0))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TDirRoleInfo*, uintptr_t))(Il2CppBase() + 0x443D1E8))(this, reader);
	}

};

}
