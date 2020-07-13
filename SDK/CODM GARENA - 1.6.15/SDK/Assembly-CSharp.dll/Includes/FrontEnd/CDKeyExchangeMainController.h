#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CDKeyExchangeMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CDKeyExchangeMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& partition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& requestUrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& constStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mUrlHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sServiceType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& actid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& lang() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& country() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> T& tipShowTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& timeOut() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& errorCodeDic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeCdkey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ISCDKeyError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUnKnownErrorTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowIretErrorTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValidationResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRequestParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItopParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291A528))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291A5FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291BDD0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291BF34))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291C080))(this);
	}
	template <typename T = void> T onTips() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291C168))(this);
	}
	template <typename T = void> T OnExchangeCdkey() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291C314))(this);
	}
	template <typename T = bool> T ISCDKeyError(int32_t code) {
		return ((T (*)(CDKeyExchangeMainController*, int32_t))(Il2CppBase() + 0x291D86C))(this, code);
	}
	template <typename T = void> T DoShowCommonTips(int32_t errorCode) {
		return ((T (*)(CDKeyExchangeMainController*, int32_t))(Il2CppBase() + 0x291D4D0))(this, errorCode);
	}
	template <typename T = void> T ShowUnKnownErrorTips(int32_t errorCode) {
		return ((T (*)(CDKeyExchangeMainController*, int32_t))(Il2CppBase() + 0x291DAC8))(this, errorCode);
	}
	template <typename T = void> T ShowIretErrorTips(int32_t iRet, Il2CppString* msg) {
		return ((T (*)(CDKeyExchangeMainController*, int32_t, Il2CppString*))(Il2CppBase() + 0x291D24C))(this, iRet, msg);
	}
	template <typename T = bool> T CheckValidationResult(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(CDKeyExchangeMainController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x291DD5C))(this, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = Il2CppString*> static T GetRequestParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x291A9E0))(0);
	}
	template <typename T = Il2CppString*> static T GetChannelToken(Il2CppString* channelinfo) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x291E0E4))(0, channelinfo);
	}
	template <typename T = Il2CppString*> static T GetItopParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x291DE58))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291E358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291E360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291E368))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291E370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CDKeyExchangeMainController*))(Il2CppBase() + 0x291E378))(this);
	}

};

}
