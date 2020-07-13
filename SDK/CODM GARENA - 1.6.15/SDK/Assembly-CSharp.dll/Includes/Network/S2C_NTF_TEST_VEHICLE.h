#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CNTFTESTVEHICLE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_NTF_TEST_VEHICLE"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Z() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int16_t> T& LinearVelocityX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int16_t> T& LinearVelocityY() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = int16_t> T& LinearVelocityZ() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& Steering() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = unsigned char> T& Throttle() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = unsigned char> T& Brake() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& Handbrake() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = unsigned char> T& Gear() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int32_t> T& RPM() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int16_t> T& Drag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& WheelCount() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WheelData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CNTFTESTVEHICLE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FA87AC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4FA8B34))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CNTFTESTVEHICLE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FA8C38))(this, P0, P1);
	}

};

}
