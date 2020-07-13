#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LanternAnnoucementDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LanternAnnoucementDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_LanternAnnoucementNotifyList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LanternAnnoucementFetchList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MAXLANTERANNOUCEMENTNUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SpecialFloatAnnoucementList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitRoundAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineNotifyAndFetchAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLotteryAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLotteryAnnoucemnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestLotteryAnnoucementData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDelOneSystemAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelExpireNotifyAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelSpecialAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAddUniqueNotifyAnnoucementToCashedList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUniqueAddSpecialAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNewAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstLaternLobbyAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelLobbyAnnoucementDataFromDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSortLobbyAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstSpecialFloatAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSortSpecialFloatAnnoucement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelSpecialFloatAnnoucementDataFromDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetInitRoundAnnoucement(uintptr_t announcement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368B858))(this, announcement);
	}
	template <typename T = void> T SortList(Il2CppList<uintptr_t>* roundLanternAnnoucementList) {
		return ((T (*)(LanternAnnoucementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x368B968))(this, roundLanternAnnoucementList);
	}
	template <typename T = void> T CombineNotifyAndFetchAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368BAC4))(this);
	}
	template <typename T = void> T Update(Il2CppList<uintptr_t>* AnnoucementList) {
		return ((T (*)(LanternAnnoucementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x368BB5C))(this, AnnoucementList);
	}
	template <typename T = void> T UpdateLotteryAnnoucement(Il2CppList<uintptr_t>* lotteryAnnoucementList) {
		return ((T (*)(LanternAnnoucementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x368BC20))(this, lotteryAnnoucementList);
	}
	template <typename T = bool> T HasLotteryAnnoucemnt() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368BCC0))(this);
	}
	template <typename T = void> T RequestLotteryAnnoucementData() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368BD60))(this);
	}
	template <typename T = bool> T TryDelOneSystemAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368BDF8))(this);
	}
	template <typename T = void> T DelExpireNotifyAnnoucement(uintptr_t announcement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368BE98))(this, announcement);
	}
	template <typename T = void> T DelSpecialAnnoucement(uintptr_t annoucement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368BF38))(this, annoucement);
	}
	template <typename T = bool> T TryAddUniqueNotifyAnnoucementToCashedList(uintptr_t announcement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368BFD8))(this, announcement);
	}
	template <typename T = void> T TryUniqueAddSpecialAnnoucement(uintptr_t announcement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368C178))(this, announcement);
	}
	template <typename T = void> T NotifyNewAnnoucement(uintptr_t announcement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368C328))(this, announcement);
	}
	template <typename T = uintptr_t> T GetFirstLaternLobbyAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368C3C8))(this);
	}
	template <typename T = void> T DelLobbyAnnoucementDataFromDataStore(uintptr_t roundLanternAnnoucement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368C4DC))(this, roundLanternAnnoucement);
	}
	template <typename T = void> T ReSortLobbyAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368C5BC))(this);
	}
	template <typename T = uintptr_t> T GetFirstSpecialFloatAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368C664))(this);
	}
	template <typename T = void> T ReSortSpecialFloatAnnoucement() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368C778))(this);
	}
	template <typename T = void> T DelSpecialFloatAnnoucementDataFromDataStore(uintptr_t roundLanternAnnouncement) {
		return ((T (*)(LanternAnnoucementDataStore*, uintptr_t))(Il2CppBase() + 0x368C820))(this, roundLanternAnnouncement);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368C900))(this);
	}
	template <typename T = int32_t> static T SortListm__0(uintptr_t x1, uintptr_t x2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x368CA28))(0, x1, x2);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LanternAnnoucementDataStore*))(Il2CppBase() + 0x368CAC8))(this);
	}

};

}
