#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroid"));
	}

	template <typename T = uintptr_t> T& jc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& currentActivity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& application() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& hsHelpshiftClass() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T install(Il2CppString* apiKey, Il2CppString* domain, Il2CppString* appId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x474F504))(this, apiKey, domain, appId, configMap);
	}
	template <typename T = void> T requestUnreadMessagesCount(bool isAsync) {
		return ((T (*)(HelpshiftAndroid*, bool))(Il2CppBase() + 0x474F9BC))(this, isAsync);
	}
	template <typename T = void> T setNameAndEmail(Il2CppString* userName, Il2CppString* email) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x474FBBC))(this, userName, email);
	}
	template <typename T = void> T setUserIdentifier(Il2CppString* identifier) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x474FD24))(this, identifier);
	}
	template <typename T = void> T registerDeviceToken(Il2CppString* deviceToken) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x474FE48))(this, deviceToken);
	}
	template <typename T = void> T leaveBreadCrumb(Il2CppString* breadCrumb) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x475004C))(this, breadCrumb);
	}
	template <typename T = void> T clearBreadCrumbs() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x4750170))(this);
	}
	template <typename T = void> T login(Il2CppString* identifier, Il2CppString* userName, Il2CppString* email) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x475023C))(this, identifier, userName, email);
	}
	template <typename T = void> T login_1(uintptr_t helpshiftUser) {
		return ((T (*)(HelpshiftAndroid*, uintptr_t))(Il2CppBase() + 0x4750484))(this, helpshiftUser);
	}
	template <typename T = void> T clearAnonymousUser() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x47507B8))(this);
	}
	template <typename T = void> T logout() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x4750884))(this);
	}
	template <typename T = Il2CppString*> T serializeApiConfig(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4750950))(this, configMap);
	}
	template <typename T = void> T showConversation(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4750AA4))(this, configMap);
	}
	template <typename T = void> T showFAQSection(Il2CppString* sectionPublishId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4750C1C))(this, sectionPublishId, configMap);
	}
	template <typename T = void> T showSingleFAQ(Il2CppString* questionPublishId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4750DD8))(this, questionPublishId, configMap);
	}
	template <typename T = void> T showFAQs(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4750F94))(this, configMap);
	}
	template <typename T = void> T updateMetaData(Il2CppDictionary<Il2CppString*, uintptr_t>* metaData) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x475110C))(this, metaData);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T cleanConfig(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x475097C))(this, configMap);
	}
	template <typename T = void> T handlePushNotification(Il2CppDictionary<Il2CppString*, uintptr_t>* pushNotificationData) {
		return ((T (*)(HelpshiftAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4751244))(this, pushNotificationData);
	}
	template <typename T = void> T showAlertToRateAppWithURL(Il2CppString* url) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x475147C))(this, url);
	}
	template <typename T = void> T registerDelegates() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x47515A0))(this);
	}
	template <typename T = void> T setSDKLanguage(Il2CppString* locale) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x47516C4))(this, locale);
	}
	template <typename T = void> T setTheme(Il2CppString* themeResourceName) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*))(Il2CppBase() + 0x47517E8))(this, themeResourceName);
	}
	template <typename T = void> T showDynamicForm(Il2CppString* title, Il2CppArray<uintptr_t>* flows) {
		return ((T (*)(HelpshiftAndroid*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x475190C))(this, title, flows);
	}
	template <typename T = void> T checkIfConversationActive() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x4751ACC))(this);
	}
	template <typename T = void> T onApplicationQuit() {
		return ((T (*)(HelpshiftAndroid*))(Il2CppBase() + 0x4751B98))(this);
	}
	template <typename T = Il2CppString*> T jsonifyHelpshiftUser(uintptr_t helpshiftUser) {
		return ((T (*)(HelpshiftAndroid*, uintptr_t))(Il2CppBase() + 0x475065C))(this, helpshiftUser);
	}

};

}
