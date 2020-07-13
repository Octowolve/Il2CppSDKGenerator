#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components.WGOComps {

class WGOCompAuxSends
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components.WGOComps", "WGOComp_AuxSends"));
	}

	template <typename T = uintptr_t> T& mSendArray() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListAuxSends() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Alloc() {
		return ((T (*)(WGOCompAuxSends*))(Il2CppBase() + 0x44F4AD8))(this);
	}
	template <typename T = void> T SetSend(int32_t iIndex, Il2CppString* strAuxBusName, float fControlVal) {
		return ((T (*)(WGOCompAuxSends*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x44F4C3C))(this, iIndex, strAuxBusName, fControlVal);
	}
	template <typename T = void> T ClearSends() {
		return ((T (*)(WGOCompAuxSends*))(Il2CppBase() + 0x44F4FF0))(this);
	}
	template <typename T = void> T ApplySend() {
		return ((T (*)(WGOCompAuxSends*))(Il2CppBase() + 0x44F5128))(this);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbInput) {
		return ((T (*)(WGOCompAuxSends*, uintptr_t))(Il2CppBase() + 0x44F5750))(this, sbInput);
	}
	template <typename T = void> T _SetSend(uint32_t iBusID, float fControlVal) {
		return ((T (*)(WGOCompAuxSends*, uint32_t, float))(Il2CppBase() + 0x44F4D08))(this, iBusID, fControlVal);
	}
	template <typename T = void> T __SetSend(float fControlVal, uintptr_t pAuxSend, uint32_t iBusID) {
		return ((T (*)(WGOCompAuxSends*, float, uintptr_t, uint32_t))(Il2CppBase() + 0x44F59BC))(this, fControlVal, pAuxSend, iBusID);
	}

};

}
