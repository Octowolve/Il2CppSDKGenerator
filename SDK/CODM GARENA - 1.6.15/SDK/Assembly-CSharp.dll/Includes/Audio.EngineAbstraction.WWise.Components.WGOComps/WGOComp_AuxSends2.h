#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components.WGOComps {

class WGOCompAuxSends2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components.WGOComps", "WGOComp_AuxSends2"));
	}

	template <typename T = uintptr_t> T& mSendArray() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListAuxSends() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Alloc() {
		return ((T (*)(WGOCompAuxSends2*))(Il2CppBase() + 0x44F5C00))(this);
	}
	template <typename T = void> T SetSend(int32_t iIndex, Il2CppString* strAuxBusName, float fControlVal) {
		return ((T (*)(WGOCompAuxSends2*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x44F5D5C))(this, iIndex, strAuxBusName, fControlVal);
	}
	template <typename T = void> T ClearSends() {
		return ((T (*)(WGOCompAuxSends2*))(Il2CppBase() + 0x44F5FB4))(this);
	}
	template <typename T = void> T ApplySend() {
		return ((T (*)(WGOCompAuxSends2*))(Il2CppBase() + 0x44F61C0))(this);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbInput) {
		return ((T (*)(WGOCompAuxSends2*, uintptr_t))(Il2CppBase() + 0x44F67A4))(this, sbInput);
	}
	template <typename T = void> T _SetSend(int32_t iIndex, Il2CppString* BusName, uint32_t iBusID, float fControlVal) {
		return ((T (*)(WGOCompAuxSends2*, int32_t, Il2CppString*, uint32_t, float))(Il2CppBase() + 0x44F5EE4))(this, iIndex, BusName, iBusID, fControlVal);
	}
	template <typename T = void> T __SetSend(float fControlVal, uintptr_t pAuxSend, Il2CppString* BusName, uint32_t iBusID) {
		return ((T (*)(WGOCompAuxSends2*, float, uintptr_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x44F6A00))(this, fControlVal, pAuxSend, BusName, iBusID);
	}

};

}
