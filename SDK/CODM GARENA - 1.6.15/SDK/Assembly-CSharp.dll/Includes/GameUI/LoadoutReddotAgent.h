#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutReddotAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutReddotAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResGetReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDelReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResDelReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfNewReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAddReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResAddReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadEntranceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_LoadoutReddotDS() {
		return ((T (*)(LoadoutReddotAgent*))(Il2CppBase() + 0x1F22FBC))(this);
	}
	template <typename T = void> T SelfLog(Il2CppString* text, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(LoadoutReddotAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F2306C))(this, text, param);
	}
	template <typename T = void> T SelfShowTips(Il2CppString* text) {
		return ((T (*)(LoadoutReddotAgent*, Il2CppString*))(Il2CppBase() + 0x1F2320C))(this, text);
	}
	template <typename T = void> T ReqGetReddot() {
		return ((T (*)(LoadoutReddotAgent*))(Il2CppBase() + 0x1F23484))(this);
	}
	template <typename T = bool> T ResGetReddot(uintptr_t message) {
		return ((T (*)(LoadoutReddotAgent*, uintptr_t))(Il2CppBase() + 0x1F2360C))(this, message);
	}
	template <typename T = void> T ReqDelReddot(Il2CppList<uintptr_t>* reddotList) {
		return ((T (*)(LoadoutReddotAgent*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F2556C))(this, reddotList);
	}
	template <typename T = bool> T ResDelReddot(uintptr_t message) {
		return ((T (*)(LoadoutReddotAgent*, uintptr_t))(Il2CppBase() + 0x1F2574C))(this, message);
	}
	template <typename T = bool> T NtfNewReddot(uintptr_t message) {
		return ((T (*)(LoadoutReddotAgent*, uintptr_t))(Il2CppBase() + 0x1F25978))(this, message);
	}
	template <typename T = void> T ReqAddReddot(Il2CppList<uintptr_t>* reddotList) {
		return ((T (*)(LoadoutReddotAgent*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F25B58))(this, reddotList);
	}
	template <typename T = bool> T ResAddReddot(uintptr_t message) {
		return ((T (*)(LoadoutReddotAgent*, uintptr_t))(Il2CppBase() + 0x1F2634C))(this, message);
	}
	template <typename T = void> T UploadEntranceClick(uint32_t type, uint32_t hostId, uint64_t hostGuid, uint32_t targetId, uint64_t targetGuid) {
		return ((T (*)(LoadoutReddotAgent*, uint32_t, uint32_t, uint64_t, uint32_t, uint64_t))(Il2CppBase() + 0x1F26578))(this, type, hostId, hostGuid, targetId, targetGuid);
	}

};

}
