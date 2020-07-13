#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReceiveUICacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReceiveUICacheData"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kSpecicalReceiveDelayShowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CurrentReceivePopupType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ReceiveFlag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bCompositeReceive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& PrepareToShowNewItems() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PrepareToShowNewBoxs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& PrepareToShowDecomposeAgingItems() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& OnceTitle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& rewardStyle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& m_LastReceiveGoldTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_NewReceiveGoldCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& m_LastReceiveDiamondTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_NewReceiveDiamondCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_NewReceiveEXPCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int64_t> T& m_LastReceiveExpTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& m_LastReceiveGuildCoinTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_NewReceiveGuildCoin() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& m_LastReceivePVPCoinTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_NewReceivePVPCoin() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int64_t> T& m_LastReceivePVECoinTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_NewReceivePVECoin() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& m_LastReceiveTalentPointsTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_NewReceiveTalentPoints() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_NewReceiveGoldCount() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB831C))(this);
	}
	template <typename T = void> T set_NewReceiveGoldCount(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8324))(this, value);
	}
	template <typename T = int32_t> T get_NewReceiveDiamondCount() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB841C))(this);
	}
	template <typename T = void> T set_NewReceiveDiamondCount(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8424))(this, value);
	}
	template <typename T = int32_t> T get_NewReceiveEXPCount() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB851C))(this);
	}
	template <typename T = void> T set_NewReceiveEXPCount(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8524))(this, value);
	}
	template <typename T = int32_t> T get_NewReceiveGuildCoin() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB861C))(this);
	}
	template <typename T = void> T set_NewReceiveGuildCoin(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8624))(this, value);
	}
	template <typename T = int32_t> T get_NewReceivePVPCoin() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB871C))(this);
	}
	template <typename T = void> T set_NewReceivePVPCoin(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8724))(this, value);
	}
	template <typename T = int32_t> T get_NewReceivePVECoin() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB881C))(this);
	}
	template <typename T = void> T set_NewReceivePVECoin(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8824))(this, value);
	}
	template <typename T = int32_t> T get_NewReceiveTalentPoints() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB891C))(this);
	}
	template <typename T = void> T set_NewReceiveTalentPoints(int32_t value) {
		return ((T (*)(ReceiveUICacheData*, int32_t))(Il2CppBase() + 0x3AB8924))(this, value);
	}
	template <typename T = void> T ClearCacheTime() {
		return ((T (*)(ReceiveUICacheData*))(Il2CppBase() + 0x3AB8A1C))(this);
	}

};

}
