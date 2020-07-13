#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class MidasPayService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "MidasPayService"));
	}

	template <typename T = Il2CppString*> static T& unityVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mCallBackUtils() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& mHasInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& appExtend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& mMidasInitCallback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mMidasPayCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mMidasGetProductCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mMidasGetIntroPriceCallback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mMidasGetInfoCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mMidasReprovidetCallback() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mMidasQueryInventoryCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mMidasQueryPromotionCallback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& helperClass() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& helper() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reprovide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchWeb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPayEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMidasSDKVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CouponsRollBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIntroPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGarenaProductInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScanGoogleInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasLoginExpiredCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetInfoFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetLocalPriceCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasGetIntroPriceCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasReProvidetCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasQueryPurchaseInventoryCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasQueryPromotionCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41D1564))(0);
	}
	template <typename T = void> T SetProcess(Il2CppString* processName) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D7DB8))(this, processName);
	}
	template <typename T = void> T Initialize(Il2CppString* idc, Il2CppString* env, Il2CppString* idcInfo, uintptr_t req, uintptr_t callback) {
		return ((T (*)(MidasPayService*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41D7EE4))(this, idc, env, idcInfo, req, callback);
	}
	template <typename T = void> T Pay(uintptr_t req, uintptr_t callback) {
		return ((T (*)(MidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41D8678))(this, req, callback);
	}
	template <typename T = void> T GetInfo(Il2CppString* reqType, uintptr_t req, uintptr_t callback) {
		return ((T (*)(MidasPayService*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41D8C78))(this, reqType, req, callback);
	}
	template <typename T = void> T Reprovide(uintptr_t callback) {
		return ((T (*)(MidasPayService*, uintptr_t))(Il2CppBase() + 0x41D9284))(this, callback);
	}
	template <typename T = void> T LaunchWeb(uintptr_t req, uintptr_t callback) {
		return ((T (*)(MidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41D970C))(this, req, callback);
	}
	template <typename T = bool> T IsPayEnable() {
		return ((T (*)(MidasPayService*))(Il2CppBase() + 0x41D9C28))(this);
	}
	template <typename T = void> T SetLogEnable(bool enable) {
		return ((T (*)(MidasPayService*, bool))(Il2CppBase() + 0x41D9EB8))(this, enable);
	}
	template <typename T = Il2CppString*> T GetMidasSDKVersion() {
		return ((T (*)(MidasPayService*))(Il2CppBase() + 0x41DA484))(this);
	}
	template <typename T = void> T SetPath(Il2CppString* path) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41DA810))(this, path);
	}
	template <typename T = void> T CouponsRollBack(Il2CppString* s) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41DAB9C))(this, s);
	}
	template <typename T = void> T GetLocalPrice(Il2CppString* channel, Il2CppList<Il2CppString*>* productList, uintptr_t callback) {
		return ((T (*)(MidasPayService*, Il2CppString*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x41DAFC0))(this, channel, productList, callback);
	}
	template <typename T = void> T GetIntroPrice(Il2CppString* channel, Il2CppList<Il2CppString*>* productList, uintptr_t callback) {
		return ((T (*)(MidasPayService*, Il2CppString*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x41DB3D0))(this, channel, productList, callback);
	}
	template <typename T = void> T GetGarenaProductInfo(uintptr_t request, uintptr_t callback) {
		return ((T (*)(MidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41DB6CC))(this, request, callback);
	}
	template <typename T = void> T ScanGoogleInventory(int32_t serverId, int32_t roleId, uintptr_t callback) {
		return ((T (*)(MidasPayService*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x41DBA0C))(this, serverId, roleId, callback);
	}
	template <typename T = void> T MidasPayCallback(Il2CppString* result) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D1724))(this, result);
	}
	template <typename T = void> T MidasLoginExpiredCallback() {
		return ((T (*)(MidasPayService*))(Il2CppBase() + 0x41D1A54))(this);
	}
	template <typename T = void> T MidasInitCallback(Il2CppString* result) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D225C))(this, result);
	}
	template <typename T = void> T MidasGetInfoFinishCallback(Il2CppString* type, int32_t retCode, Il2CppString* json) {
		return ((T (*)(MidasPayService*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x41D2680))(this, type, retCode, json);
	}
	template <typename T = void> T MidasGetLocalPriceCallback(Il2CppString* resul) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D1CAC))(this, resul);
	}
	template <typename T = void> T MidasGetIntroPriceCallback(Il2CppString* resul) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D1F84))(this, resul);
	}
	template <typename T = void> T MidasReProvidetCallback(Il2CppString* result) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D2B00))(this, result);
	}
	template <typename T = void> T MidasQueryPurchaseInventoryCallback(Il2CppString* result) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41DBC78))(this, result);
	}
	template <typename T = void> T MidasQueryPromotionCallback(Il2CppString* result) {
		return ((T (*)(MidasPayService*, Il2CppString*))(Il2CppBase() + 0x41D2DD0))(this, result);
	}

};

}
