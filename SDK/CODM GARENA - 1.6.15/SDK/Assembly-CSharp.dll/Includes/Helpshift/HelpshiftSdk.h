#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftSdk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftSdk"));
	}

	template <typename T = Il2CppString*> static T& HS_RATE_ALERT_CLOSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HS_RATE_ALERT_FEEDBACK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HS_RATE_ALERT_SUCCESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HS_RATE_ALERT_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSTAGSKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSCUSTOMMETADATAKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UNITY_GAME_OBJECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_IN_APP_NOTIFICATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_DEFAULT_FALLBACK_LANGUAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_LOGGING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_INBOX_POLLING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_AUTOMATIC_THEME_SWITCHING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DISABLE_ENTRY_EXIT_ANIMATIONS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSCUSTOMISSUEFIELDKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSTAGSMATCHINGKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACT_US_ALWAYS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACT_US_NEVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACT_US_AFTER_VIEWING_FAQS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACT_US_AFTER_MARKING_ANSWER_UNHELPFUL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSUserAcceptedTheSolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSUserRejectedTheSolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSUserSentScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HSUserReviewedTheApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeConversation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeFaqs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeFaqSection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeSingleFaq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTypeNested() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsCustomContactUsFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HsFlowTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& nativeSdk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T getInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x47533A4))(0);
	}
	template <typename T = void> T install(Il2CppString* apiKey, Il2CppString* domainName, Il2CppString* appId, Il2CppDictionary<Il2CppString*, uintptr_t>* config) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x475352C))(this, apiKey, domainName, appId, config);
	}
	template <typename T = void> T requestUnreadMessagesCount(bool isAsync) {
		return ((T (*)(HelpshiftSdk*, bool))(Il2CppBase() + 0x47536F8))(this, isAsync);
	}
	template <typename T = void> T setNameAndEmail(Il2CppString* userName, Il2CppString* email) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47537C8))(this, userName, email);
	}
	template <typename T = void> T setUserIdentifier(Il2CppString* identifier) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x47538A0))(this, identifier);
	}
	template <typename T = void> T login(Il2CppString* identifier, Il2CppString* name, Il2CppString* email) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4753970))(this, identifier, name, email);
	}
	template <typename T = void> T login_1(uintptr_t helpshiftUser) {
		return ((T (*)(HelpshiftSdk*, uintptr_t))(Il2CppBase() + 0x4753A58))(this, helpshiftUser);
	}
	template <typename T = void> T clearAnonymousUser() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x4753B28))(this);
	}
	template <typename T = void> T logout() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x4753BF0))(this);
	}
	template <typename T = void> T registerDeviceToken(Il2CppString* deviceToken) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x4753CB8))(this, deviceToken);
	}
	template <typename T = void> T leaveBreadCrumb(Il2CppString* breadCrumb) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x4753D88))(this, breadCrumb);
	}
	template <typename T = void> T clearBreadCrumbs() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x4753E58))(this);
	}
	template <typename T = void> T showConversation(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4753F20))(this, configMap);
	}
	template <typename T = void> T showFAQSection(Il2CppString* sectionPublishId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4753FF0))(this, sectionPublishId, configMap);
	}
	template <typename T = void> T showSingleFAQ(Il2CppString* questionPublishId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x47540C8))(this, questionPublishId, configMap);
	}
	template <typename T = void> T showFAQs(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x47541A0))(this, configMap);
	}
	template <typename T = void> T updateMetaData(Il2CppDictionary<Il2CppString*, uintptr_t>* metaData) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4754270))(this, metaData);
	}
	template <typename T = void> T handlePushNotification(Il2CppDictionary<Il2CppString*, uintptr_t>* pushNotificationData) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4754340))(this, pushNotificationData);
	}
	template <typename T = void> T showAlertToRateAppWithURL(Il2CppString* url) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x4754750))(this, url);
	}
	template <typename T = void> T setSDKLanguage(Il2CppString* locale) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x4754820))(this, locale);
	}
	template <typename T = void> T setTheme(Il2CppString* themeName) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x47548F0))(this, themeName);
	}
	template <typename T = void> T registerDelegates() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x47549C0))(this);
	}
	template <typename T = void> T showDynamicForm(Il2CppString* title, Il2CppArray<uintptr_t>* flows) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4754A88))(this, title, flows);
	}
	template <typename T = void> T onApplicationQuit() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x4754B60))(this);
	}
	template <typename T = void> T checkIfConversationActive() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x4754C28))(this);
	}

};

}
