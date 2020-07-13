#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepRoomUserCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepRoomUserCollection"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& RoomUserCollection() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(LockStepRoomUserCollection*))(Il2CppBase() + 0x46B11F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(LockStepRoomUserCollection*, uintptr_t))(Il2CppBase() + 0x46B12C8))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(LockStepRoomUserCollection*, uintptr_t))(Il2CppBase() + 0x46B13A8))(this, reader);
	}

};

}
