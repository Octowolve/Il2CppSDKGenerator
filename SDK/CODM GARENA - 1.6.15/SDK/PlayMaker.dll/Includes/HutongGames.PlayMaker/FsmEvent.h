#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmEvent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& eventList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& syncObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isSystemEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isGlobal() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& BecameInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& BecameVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CollisionExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CollisionStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CollisionEnter2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& CollisionExit2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& CollisionStay2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& ControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& Finished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& LevelLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& MouseDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& MouseDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& MouseEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& MouseExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& MouseOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& MouseUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& MouseUpAsButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& TriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& TriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& TriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& TriggerEnter2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& TriggerExit2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& TriggerStay2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& ApplicationFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& ApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& ApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& ParticleCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& JointBreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& JointBreak2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& PlayerConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& ServerInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& ConnectedToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& PlayerDisconnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& DisconnectedFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& FailedToConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& FailedToConnectToMasterServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& MasterServerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& NetworkInstantiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = uintptr_t> static T get_GlobalsComponent() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07328))(0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T get_globalEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07334))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_EventList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07368))(0);
	}
	template <typename T = void> static T set_EventList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2F07580))(0, value);
	}
	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0748C))(0);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2EE76E0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(FsmEvent*, Il2CppString*))(Il2CppBase() + 0x2F07D38))(this, value);
	}
	template <typename T = bool> T get_IsSystemEvent() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2EF6ACC))(this);
	}
	template <typename T = void> T set_IsSystemEvent(bool value) {
		return ((T (*)(FsmEvent*, bool))(Il2CppBase() + 0x2F07D40))(this, value);
	}
	template <typename T = bool> T get_IsMouseEvent() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2EF75D4))(this);
	}
	template <typename T = bool> T get_IsApplicationEvent() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2EF77EC))(this);
	}
	template <typename T = bool> T get_IsGlobal() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2F08378))(this);
	}
	template <typename T = void> T set_IsGlobal(bool value) {
		return ((T (*)(FsmEvent*, bool))(Il2CppBase() + 0x2F08380))(this, value);
	}
	template <typename T = bool> static T IsNullOrEmpty(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF944C))(0, fsmEvent);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(FsmEvent*))(Il2CppBase() + 0x2F08B18))(this);
	}
	template <typename T = void> T set_Path(Il2CppString* value) {
		return ((T (*)(FsmEvent*, Il2CppString*))(Il2CppBase() + 0x2F08B20))(this, value);
	}
	template <typename T = int32_t> T System_IComparable_CompareTo(uintptr_t obj) {
		return ((T (*)(FsmEvent*, uintptr_t))(Il2CppBase() + 0x2F08D04))(this, obj);
	}
	template <typename T = bool> static T EventListContainsEvent(Il2CppList<uintptr_t>* fsmEventList, Il2CppString* fsmEventName) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x2EFC3A0))(0, fsmEventList, fsmEventName);
	}
	template <typename T = void> static T RemoveEventFromEventList(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F08E38))(0, fsmEvent);
	}
	template <typename T = uintptr_t> static T FindEvent(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F08FC8))(0, eventName);
	}
	template <typename T = bool> static T IsEventGlobal(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F09250))(0, eventName);
	}
	template <typename T = bool> static T EventListContains(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F09324))(0, eventName);
	}
	template <typename T = uintptr_t> static T GetFsmEvent(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ED3B0C))(0, eventName);
	}
	template <typename T = uintptr_t> static T GetFsmEvent_1(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF64DC))(0, fsmEvent);
	}
	template <typename T = uintptr_t> static T AddFsmEvent(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F093CC))(0, fsmEvent);
	}
	template <typename T = void> static T AddSystemEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07634))(0);
	}
	template <typename T = uintptr_t> static T AddSystemEvent(Il2CppString* eventName, Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2F094A4))(0, eventName, path);
	}
	template <typename T = uintptr_t> static T get_BecameInvisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B1A4))(0);
	}
	template <typename T = void> static T set_BecameInvisible(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F096EC))(0, value);
	}
	template <typename T = uintptr_t> static T get_BecameVisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B254))(0);
	}
	template <typename T = void> static T set_BecameVisible(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F097A0))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6CE4))(0);
	}
	template <typename T = void> static T set_CollisionEnter(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09DF4))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionExit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6D94))(0);
	}
	template <typename T = void> static T set_CollisionExit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09EA8))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionStay() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6E44))(0);
	}
	template <typename T = void> static T set_CollisionStay(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09F5C))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionEnter2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7104))(0);
	}
	template <typename T = void> static T set_CollisionEnter2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A2E0))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionExit2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF71B4))(0);
	}
	template <typename T = void> static T set_CollisionExit2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A394))(0, value);
	}
	template <typename T = uintptr_t> static T get_CollisionStay2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7264))(0);
	}
	template <typename T = void> static T set_CollisionStay2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A448))(0, value);
	}
	template <typename T = uintptr_t> static T get_ControllerColliderHit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF73C4))(0);
	}
	template <typename T = void> static T set_ControllerColliderHit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A010))(0, value);
	}
	template <typename T = uintptr_t> static T get_Finished() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B304))(0);
	}
	template <typename T = void> static T set_Finished(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09638))(0, value);
	}
	template <typename T = uintptr_t> static T get_LevelLoaded() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF78DC))(0);
	}
	template <typename T = void> static T set_LevelLoaded(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09854))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07D48))(0);
	}
	template <typename T = void> static T set_MouseDown(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09908))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseDrag() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07DF8))(0);
	}
	template <typename T = void> static T set_MouseDrag(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F099BC))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07EA8))(0);
	}
	template <typename T = void> static T set_MouseEnter(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09A70))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseExit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07F58))(0);
	}
	template <typename T = void> static T set_MouseExit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09B24))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseOver() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F08008))(0);
	}
	template <typename T = void> static T set_MouseOver(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09BD8))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F080B8))(0);
	}
	template <typename T = void> static T set_MouseUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09C8C))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseUpAsButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F08168))(0);
	}
	template <typename T = void> static T set_MouseUpAsButton(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F09D40))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6AD4))(0);
	}
	template <typename T = void> static T set_TriggerEnter(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A0C4))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerExit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6B84))(0);
	}
	template <typename T = void> static T set_TriggerExit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A178))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerStay() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6C34))(0);
	}
	template <typename T = void> static T set_TriggerStay(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A22C))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerEnter2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6EF4))(0);
	}
	template <typename T = void> static T set_TriggerEnter2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A4FC))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerExit2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF6FA4))(0);
	}
	template <typename T = void> static T set_TriggerExit2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A5B0))(0, value);
	}
	template <typename T = uintptr_t> static T get_TriggerStay2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7054))(0);
	}
	template <typename T = void> static T set_TriggerStay2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A664))(0, value);
	}
	template <typename T = uintptr_t> static T get_ApplicationFocus() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F08218))(0);
	}
	template <typename T = void> static T set_ApplicationFocus(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AD6C))(0, value);
	}
	template <typename T = uintptr_t> static T get_ApplicationPause() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F082C8))(0);
	}
	template <typename T = void> static T set_ApplicationPause(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AE20))(0, value);
	}
	template <typename T = uintptr_t> static T get_ApplicationQuit() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B3B4))(0);
	}
	template <typename T = void> static T set_ApplicationQuit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AED4))(0, value);
	}
	template <typename T = uintptr_t> static T get_ParticleCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7314))(0);
	}
	template <typename T = void> static T set_ParticleCollision(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AF88))(0, value);
	}
	template <typename T = uintptr_t> static T get_JointBreak() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7474))(0);
	}
	template <typename T = void> static T set_JointBreak(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0B03C))(0, value);
	}
	template <typename T = uintptr_t> static T get_JointBreak2D() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7524))(0);
	}
	template <typename T = void> static T set_JointBreak2D(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0B0F0))(0, value);
	}
	template <typename T = uintptr_t> static T get_PlayerConnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B464))(0);
	}
	template <typename T = void> static T set_PlayerConnected(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A718))(0, value);
	}
	template <typename T = uintptr_t> static T get_ServerInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B514))(0);
	}
	template <typename T = void> static T set_ServerInitialized(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A7CC))(0, value);
	}
	template <typename T = uintptr_t> static T get_ConnectedToServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B5C4))(0);
	}
	template <typename T = void> static T set_ConnectedToServer(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A880))(0, value);
	}
	template <typename T = uintptr_t> static T get_PlayerDisconnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B674))(0);
	}
	template <typename T = void> static T set_PlayerDisconnected(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A934))(0, value);
	}
	template <typename T = uintptr_t> static T get_DisconnectedFromServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B724))(0);
	}
	template <typename T = void> static T set_DisconnectedFromServer(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0A9E8))(0, value);
	}
	template <typename T = uintptr_t> static T get_FailedToConnect() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B7D4))(0);
	}
	template <typename T = void> static T set_FailedToConnect(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AA9C))(0, value);
	}
	template <typename T = uintptr_t> static T get_FailedToConnectToMasterServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B884))(0);
	}
	template <typename T = void> static T set_FailedToConnectToMasterServer(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AB50))(0, value);
	}
	template <typename T = uintptr_t> static T get_MasterServerEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B934))(0);
	}
	template <typename T = void> static T set_MasterServerEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0AC04))(0, value);
	}
	template <typename T = uintptr_t> static T get_NetworkInstantiate() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0B9E4))(0);
	}
	template <typename T = void> static T set_NetworkInstantiate(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0ACB8))(0, value);
	}
	template <typename T = void> static T AddGlobalEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F07BCC))(0);
	}
	template <typename T = void> static T SanityCheckEventList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F085B8))(0);
	}
	template <typename T = bool> T set_IsGlobalb__0(Il2CppString* m) {
		return ((T (*)(FsmEvent*, Il2CppString*))(Il2CppBase() + 0x2F0BA94))(this, m);
	}
	template <typename T = bool> T _ctorb__2(uintptr_t x) {
		return ((T (*)(FsmEvent*, uintptr_t))(Il2CppBase() + 0x2F0BB48))(this, x);
	}

};

}
