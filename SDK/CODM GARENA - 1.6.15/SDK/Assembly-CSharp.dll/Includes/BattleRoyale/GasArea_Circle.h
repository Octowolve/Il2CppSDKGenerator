#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class GasAreaCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "GasArea_Circle"));
	}

	template <typename T = float> T& CreateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ShrinkDurationTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& BeginShrinkPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& EndShrinkPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& BeginShrinkRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& EndShrinkRadius() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_UpdateRadiusTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_CurrentRadius() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_UpdatePositionTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupGasInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_CreateTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F094))(this);
	}
	template <typename T = void> T set_CreateTime(float value) {
		return ((T (*)(GasAreaCircle*, float))(Il2CppBase() + 0x3D4F09C))(this, value);
	}
	template <typename T = float> T get_DelayTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F0A4))(this);
	}
	template <typename T = void> T set_DelayTime(float value) {
		return ((T (*)(GasAreaCircle*, float))(Il2CppBase() + 0x3D4F0AC))(this, value);
	}
	template <typename T = float> T get_ShrinkDurationTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F0B4))(this);
	}
	template <typename T = void> T set_ShrinkDurationTime(float value) {
		return ((T (*)(GasAreaCircle*, float))(Il2CppBase() + 0x3D4F0BC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_BeginShrinkPosition() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F0C4))(this);
	}
	template <typename T = void> T set_BeginShrinkPosition(Il2CppVector3 value) {
		return ((T (*)(GasAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x3D4F0D8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_EndShrinkPosition() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F0E4))(this);
	}
	template <typename T = void> T set_EndShrinkPosition(Il2CppVector3 value) {
		return ((T (*)(GasAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x3D4F0F8))(this, value);
	}
	template <typename T = float> T get_BeginShrinkRadius() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F104))(this);
	}
	template <typename T = void> T set_BeginShrinkRadius(float value) {
		return ((T (*)(GasAreaCircle*, float))(Il2CppBase() + 0x3D4F10C))(this, value);
	}
	template <typename T = float> T get_EndShrinkRadius() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F114))(this);
	}
	template <typename T = void> T set_EndShrinkRadius(float value) {
		return ((T (*)(GasAreaCircle*, float))(Il2CppBase() + 0x3D4F11C))(this, value);
	}
	template <typename T = float> T get_BetweenShrinkTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F124))(this);
	}
	template <typename T = float> T get_BeginShrinkTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F168))(this);
	}
	template <typename T = float> T get_EndShrinkTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F17C))(this);
	}
	template <typename T = float> T get_FromBeginShrinkTime() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F198))(this);
	}
	template <typename T = bool> T get_PropertyChanged() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F1D0))(this);
	}
	template <typename T = float> T get_CurrentRadius() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F254))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(GasAreaCircle*))(Il2CppBase() + 0x3D4F3AC))(this);
	}
	template <typename T = void> T SetupGasInfo(Il2CppVector3 pos, float createTime, float iniRadius, float shrinkDuration, float targetRadius, Il2CppVector3 targetPos, float delayTime) {
		return ((T (*)(GasAreaCircle*, Il2CppVector3, float, float, float, float, Il2CppVector3, float))(Il2CppBase() + 0x3D4F498))(this, pos, createTime, iniRadius, shrinkDuration, targetRadius, targetPos, delayTime);
	}

};

}
