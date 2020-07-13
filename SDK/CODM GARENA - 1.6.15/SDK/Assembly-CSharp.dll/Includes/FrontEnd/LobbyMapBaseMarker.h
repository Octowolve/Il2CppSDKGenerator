#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapBaseMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapBaseMarker"));
	}

	template <typename T = uintptr_t> T& BaseSetting() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppQuaternion> T& AngleOnEarth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T set_AngleOnEarth(Il2CppQuaternion value) {
		return ((T (*)(LobbyMapBaseMarker*, Il2CppQuaternion))(Il2CppBase() + 0x3691CF4))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_AngleOnEarth() {
		return ((T (*)(LobbyMapBaseMarker*))(Il2CppBase() + 0x3691D0C))(this);
	}
	template <typename T = bool> T ShowAt(Il2CppQuaternion offset) {
		return ((T (*)(LobbyMapBaseMarker*, Il2CppQuaternion))(Il2CppBase() + 0x3691D1C))(this, offset);
	}
	template <typename T = Il2CppVector3> T UIPosition(Il2CppQuaternion offset) {
		return ((T (*)(LobbyMapBaseMarker*, Il2CppQuaternion))(Il2CppBase() + 0x3691E28))(this, offset);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LobbyMapBaseMarker*))(Il2CppBase() + 0x3691FC4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LobbyMapBaseMarker*))(Il2CppBase() + 0x369205C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyMapBaseMarker*))(Il2CppBase() + 0x36920F4))(this);
	}

};

}
