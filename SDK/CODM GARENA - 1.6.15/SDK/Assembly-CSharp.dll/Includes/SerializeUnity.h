#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SerializeUnity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeUnity"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_putLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_putInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_putByteArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setInitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setGameStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setUserInfoEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T putLength(uintptr_t data, uint32_t length) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4AF64A8))(0, data, length);
	}
	template <typename T = void> static T putInteger(uintptr_t data, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4AF6590))(0, data, value);
	}
	template <typename T = void> static T putByteArray(uintptr_t data, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AF6678))(0, data, value);
	}
	template <typename T = void> static T setInitInfo(uint32_t gameId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4AF6798))(0, gameId);
	}
	template <typename T = void> static T setGameStatus(uintptr_t gameStatus) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AF68E4))(0, gameStatus);
	}
	template <typename T = void> static T setUserInfoEx(uintptr_t entryId, Il2CppString* uin, Il2CppString* appId, uint32_t worldId, Il2CppString* roleId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uint32_t, Il2CppString*))(Il2CppBase() + 0x4AF6A30))(0, entryId, uin, appId, worldId, roleId);
	}

};

}
