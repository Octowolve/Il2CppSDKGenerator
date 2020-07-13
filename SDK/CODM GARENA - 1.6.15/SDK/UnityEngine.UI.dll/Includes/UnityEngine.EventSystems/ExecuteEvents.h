#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class ExecuteEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "ExecuteEvents"));
	}

	template <typename T = void*> static T& s_PointerEnterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& s_PointerExitHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& s_PointerDownHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& s_PointerUpHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& s_PointerClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& s_InitializePotentialDragHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& s_BeginDragHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& s_DragHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& s_EndDragHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& s_DropHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& s_ScrollHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& s_UpdateSelectedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& s_SelectHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& s_DeselectHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& s_MoveHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& s_SubmitHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& s_CancelHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& s_HandlerListPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_InternalTransformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = void*> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = void*> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = void*> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = void*> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& f__mg$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = void*> static T& f__mg$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& f__mg$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = void*> static T& f__mg$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& f__mg$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = void*> static T& f__mg$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& f__mg$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> static T ValidateEventData(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3394450))(0, data);
	}
	template <typename T = void> static T Execute(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFE7AC))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_1(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFE908))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_2(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFEA64))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_3(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFEBC0))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_4(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFED1C))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_5(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFEE78))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_6(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFEFD4))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_7(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF130))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_8(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF28C))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_9(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF3E8))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_10(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF544))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_11(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF6A0))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_12(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF798))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_13(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF890))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_14(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFF988))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_15(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFFAE4))(0, handler, eventData);
	}
	template <typename T = void> static T Execute_16(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFFBDC))(0, handler, eventData);
	}
	template <typename T = void*> static T get_pointerEnterHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFBDE8))(0);
	}
	template <typename T = void*> static T get_pointerExitHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFBD30))(0);
	}
	template <typename T = void*> static T get_pointerDownHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFFCD4))(0);
	}
	template <typename T = void*> static T get_pointerUpHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFFD84))(0);
	}
	template <typename T = void*> static T get_pointerClickHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFFE34))(0);
	}
	template <typename T = void*> static T get_initializePotentialDrag() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFFEE4))(0);
	}
	template <typename T = void*> static T get_beginDragHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFFF94))(0);
	}
	template <typename T = void*> static T get_dragHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D00044))(0);
	}
	template <typename T = void*> static T get_endDragHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D000F4))(0);
	}
	template <typename T = void*> static T get_dropHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D001A4))(0);
	}
	template <typename T = void*> static T get_scrollHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D00254))(0);
	}
	template <typename T = void*> static T get_updateSelectedHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D00304))(0);
	}
	template <typename T = void*> static T get_selectHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFCCE8))(0);
	}
	template <typename T = void*> static T get_deselectHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFCC38))(0);
	}
	template <typename T = void*> static T get_moveHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D003B4))(0);
	}
	template <typename T = void*> static T get_submitHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D00464))(0);
	}
	template <typename T = void*> static T get_cancelHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D00514))(0);
	}
	template <typename T = void> static T GetEventChain(uintptr_t root, void* eventChain) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x3D005C4))(0, root, eventChain);
	}
	template <typename T = bool> static T Execute_17(uintptr_t target, uintptr_t eventData, void* functor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x45EFB4C))(0, target, eventData, functor);
	}
	template <typename T = uintptr_t> static T ExecuteHierarchy(uintptr_t root, uintptr_t eventData, void* callbackFunction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x4E584E8))(0, root, eventData, callbackFunction);
	}
	template <typename T = bool> static T ShouldSendToComponent(uintptr_t component) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F0100))(0, component);
	}
	template <typename T = void> static T GetEventList(uintptr_t go, void* results) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x282F0FC))(0, go, results);
	}
	template <typename T = bool> static T CanHandleEvent(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45EF9C8))(0, go);
	}
	template <typename T = uintptr_t> static T GetEventHandler(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E58734))(0, root);
	}
	template <typename T = void> static T s_HandlerListPoolm__0(Il2CppList<uintptr_t>* l) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D0135C))(0, l);
	}

};

}
